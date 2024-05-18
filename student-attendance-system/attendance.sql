-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: May 17, 2024 at 04:55 PM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";

CREATE DATABASE IF NOT EXISTS `attendance` DEFAULT CHARACTER SET utf8 COLLATE utf8_general_ci;
USE `attendance`;
/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `attendance`
--

-- --------------------------------------------------------

--
-- Table structure for table `admin`
--

CREATE TABLE `admin` (
  `username` varchar(100) NOT NULL,
  `password` varchar(100) NOT NULL,
  `name` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;

--
-- Dumping data for table `admin`
--

INSERT INTO `admin` (`username`, `password`, `name`) VALUES
('admin', '$2y$10$aUFYN2WjUInvGIY8Mk8Adu0xDSNZ3EILaWOuKzXS9V/JXiqxtGF36', 'admin');

-- --------------------------------------------------------

--
-- Table structure for table `attend`
--

CREATE TABLE `attend` (
  `no` varchar(100) NOT NULL,
  `name` varchar(100) NOT NULL,
  `class` varchar(100) NOT NULL,
  `period` varchar(100) NOT NULL,
  `time` varchar(100) NOT NULL,
  `sub` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `attend`
--

INSERT INTO `attend` (`no`, `name`, `class`, `period`, `time`, `sub`) VALUES
('16', 'Rhythm Choudhary', 'bca-1-a', '2024-05-17-1', '08:14:50pm', 'WBP');

-- --------------------------------------------------------

--
-- Table structure for table `bca-1-a`
--

CREATE TABLE `bca-1-a` (
  `no` int(11) NOT NULL,
  `id` varchar(100) NOT NULL,
  `name` varchar(100) NOT NULL,
  `username` varchar(100) NOT NULL,
  `password` varchar(100) NOT NULL,
  `status` varchar(100) NOT NULL DEFAULT 'on',
  `2024-05-17-1` int(11) NOT NULL DEFAULT 1
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `bca-1-a`
--

INSERT INTO `bca-1-a` (`no`, `id`, `name`, `username`, `password`, `status`, `2024-05-17-1`) VALUES
(1, '1', 'sujal', 'sujal', '$2y$10$o.OUoeryIqISMMsponmh6.Pd/B0OlGYhmm2ecbS3ZU5guD8aT.NSS', 'on', 1),
(2, '2', 'ashmit', 'ashmit', '$2y$10$3G16vrhTSq4vq3unOobqm.2dSK.o1TzWCtS4O77J1..ooOQGxR.V2', 'on', 1),
(3, '3', 'pankaj', 'pankaj', '$2y$10$l/SPUoEqJwPxtZrFSg5eMObv8c4i3hq4fy44v1qommEfBi.LfROiC', 'on', 1),
(4, '4', 'chirag', 'chirag', '$2y$10$ApQSm/e4XkwA/wI4mtVS.ubWK1i2B8hZfMzhYtJQxSAnDM9jgG13u', 'on', 1);

-- --------------------------------------------------------

--
-- Table structure for table `bca-1-b`
--

CREATE TABLE `bca-1-b` (
  `no` int(11) NOT NULL,
  `id` varchar(100) NOT NULL,
  `name` varchar(100) NOT NULL,
  `username` varchar(100) NOT NULL,
  `password` varchar(100) NOT NULL,
  `status` varchar(100) NOT NULL DEFAULT 'on',
  `2024-05-17-1` int(11) NOT NULL DEFAULT 1
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `faculty`
--

CREATE TABLE `faculty` (
  `no` int(100) NOT NULL,
  `id` varchar(100) NOT NULL,
  `status` varchar(100) NOT NULL DEFAULT 'on',
  `name` varchar(100) NOT NULL,
  `username` varchar(100) NOT NULL,
  `password` varchar(100) NOT NULL,
  `branch` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_general_ci;

--
-- Dumping data for table `faculty`
--

INSERT INTO `faculty` (`no`, `id`, `status`, `name`, `username`, `password`, `branch`) VALUES
(16, '1', 'on', 'Rhythm Choudhary', 'rhythm', '$2y$10$fLEuJ5E8dAI0/yQKi98v.OZS5lzGS4V/PA6d7QoLf4uwQvwleH0pS', 'bca');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `admin`
--
ALTER TABLE `admin`
  ADD PRIMARY KEY (`username`);

--
-- Indexes for table `attend`
--
ALTER TABLE `attend`
  ADD UNIQUE KEY `id` (`no`,`name`,`class`,`period`,`time`);

--
-- Indexes for table `bca-1-a`
--
ALTER TABLE `bca-1-a`
  ADD PRIMARY KEY (`no`),
  ADD UNIQUE KEY `id` (`id`),
  ADD UNIQUE KEY `username` (`username`);

--
-- Indexes for table `bca-1-b`
--
ALTER TABLE `bca-1-b`
  ADD PRIMARY KEY (`no`),
  ADD UNIQUE KEY `id` (`id`),
  ADD UNIQUE KEY `username` (`username`);

--
-- Indexes for table `faculty`
--
ALTER TABLE `faculty`
  ADD PRIMARY KEY (`no`),
  ADD UNIQUE KEY `id` (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `bca-1-a`
--
ALTER TABLE `bca-1-a`
  MODIFY `no` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `bca-1-b`
--
ALTER TABLE `bca-1-b`
  MODIFY `no` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `faculty`
--
ALTER TABLE `faculty`
  MODIFY `no` int(100) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=17;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
